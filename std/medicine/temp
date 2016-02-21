// powder.c

inherit COMBINED_ITEM;

void init()
{
	add_action("do_pour", "pour");
}

int do_pour(string arg)
{
	string me, what;
	object ob;
	function f;

	if( !arg
	||	sscanf(arg, "%s in %s", me, what)!=2
	||	!id(me) )
		return notify_fail("指令格式: pour <藥粉> in <物品>\n");

	ob = present(what, this_player());
	if( !ob )
		return notify_fail("你身上沒有 " + what + " 這樣東西。\n");
	if( !ob->query("liquid/remaining") )
		return notify_fail(ob->name() + "裡什麼也沒有﹐先裝些水酒才能溶化藥粉。\n");
	// We let call other to call the "master copy" of the object in case the
	// powder object got destructed after used up.
	f = (: call_other, base_name(this_object()), "effect_in_liquid" :);
	ob->set("liquid/drink_func", bind(f, ob));
	message_vision("$N將一些" + name() + "倒進" + ob->name() 
		+ "﹐搖晃了幾下。\n", this_player());
	add_amount(-1);
	return 1;
}



