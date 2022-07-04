int WhoIsPrecede(LData a, LData b)
{
	if(a->xpos<b->xpos)
		return 0;
	else if(a->xpos==b->xpod)
	{
		if(a->ypos<b->ypos)
			return 0;
		else
			return 1;
	}
	else
		return 1;
}
