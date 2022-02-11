main()
{
int pass, x=10;

	while (x!=0)
	{
	printf("\nInput the password: ");
	scanf("%d",&pass);

	if (pass==1234)
    {


	input();
	calculations();
	m3();
	edc();
	emi();
	oopds();
	nas();
	result();
	remark();
	show();
	return 0;

    }
    else
    {
       printf("Wrong password, try another");
	}
	printf("\n");
   }
	return 0;
}