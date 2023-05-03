//Self-Service Technology At Airports

#include<stdio.h>
#include<string.h>
#include<dos.h>

//Aviation Authority Information
struct data
{ 
    char seats[3];
    int time;
    char plane[5];
    int id; 
    char destination[3];
    int gate;
    char name[25];
};

struct data d[50]=
   { 
   {"a1",1200,"pk309",1,"LHR",3,"Irene Perry"},
   {"d8",1800,"pk307",2,"PEW",5,"Laurence Henry"},
   {"b3",1530,"pk498",3,"UET",4,"Lionel Gordon"},
   {"d10",0745,"pk596",4,"ISL",2,"Lois Gibbs"},
   {"a2",1800,"pk307",5,"PEW",5,"Alejandro Neal"},
   {"b1",1530,"pk498",6,"UET",4,"Philip Maxwell"},
   {"b6",1200,"pk309",7,"LHR",3,"Deanna Davis"},
   {"b12",0745,"pk596",8,"ISL",2,"Hector Baldwin"},
   {"c5",1530,"pk498",9,"UET",4,"Melody Schultz"},
   {"a13",0745,"pk596",10,"ISL",2,"Claudia Simon"},
   {"c9",1800,"pk307",11,"PEW",5,"Miranda Salazar"},
   {"b7",0745,"pk596",12,"ISL",2,"Walter Hall"},
   {"c6",1800,"pk307",13,"PEW",5,"Ruby Brooks"},
   {"b10",1530,"pk498",14,"UET",4,"Anna Stewart"},
   {"a8",0745,"pk596",15,"ISL",2,"Jennifer Jenkins"},
   {"c4",1800,"pk307",16,"PEW",5,"Marie Thompson"},
   {"c13",1200,"pk309",17,"LHR",3,"Judy Rodriguez"},
   {"a1",1530,"pk498",18,"UET",4,"Jason Carter"},
   {"c5",1200,"pk309",19,"LHR",3,"Anne James"},
   {"a5",1200,"pk309",20,"LHR",3,"Karen Reed"},
   {"c8",1530,"pk498",21,"UET",4,"Martha Phillips"},
   {"b5",0745,"pk596",22,"ISL",2,"Frank Flores"},
   {"a7",1800,"pk307",23,"PEW",5,"Howard Evans"},
   {"d1",1530,"pk498",24,"UET",4,"Kevin Baker"},
   {"b3",1200,"pk309",25,"LHR",3,"Paul Perez"},
   {"b13",1800,"pk307",26,"PEW",5,"Deborah Edwards"},
   {"c1",0745,"pk596",27,"ISL",2,"Jose Hernandez"},
   {"c10",1800,"pk307",28,"PEW",5,"Willie Collins"},
   {"a9",1530,"pk498",29,"UET",4,"Anne Simmons"},
   {"c12",0745,"pk596",30,"ISL",2,"Raymond Rivera"},
   {"b8",1800,"pk307",31,"PEW",5,"Henry Taylor"},
   {"a4",1530,"pk498",32,"UET",4,"Michael Peterson"},
   {"c2",0745,"pk596",33,"ISL",2,"Earl Walker"},
   {"d2",1800,"pk307",34,"PEW",5,"Jessica Richardson"},
   {"b2",1530,"pk498",35,"UET",4,"Ruby Edwards"},
   {"c11",1200,"pk309",36,"LHR",3,"Ernest Bailey"},
   {"a3",1800,"pk307",37,"PEW",5,"Anna Sanchez"},
   {"b9",0745,"pk596",38,"ISL",2,"Heather Alexander"},
   {"c3",1800,"pk307",39,"PEW",5,"Kenneth Watson"},
   {"c7",1200,"pk309",40,"LHR",3,"Robert Rivera"},
   {"a11",1200,"pk309",41,"LHR",3,"Dorothy Griffin"},
   {"d3",1200,"pk309",42,"LHR",3,"Judy Lewis"},
   {"b11",0250,"pk104",43,"SWT",1,"Susan Perez"},
   {"d4",0250,"pk104",44,"SWT",1,"David Price"},
   {"d5",0250,"pk104",45,"SWT",1,"Chris Bennett"},
   {"d7",1200,"pk309",46,"LHR",3,"Mark Perry"},
   {"a10",0250,"pk104",47,"SWT",1,"Beverly Cooper"},
   {"d6",0250,"pk104",48,"SWT",1,"Amanda Rogers"},
   {"d9",0250,"pk104",49,"SWT",1,"Charles Hall"},
   {"a12",0250,"pk104",50,"SWT",1,"Catherine Bryant"},
   }; 

   
void flightinfo(int idt);
void procs(int idt);
void board(int idt);
void flightinfoch(int idt, char st[3]);
void boardch(int idt, char st[3]);
void procsch(int idt,char str[3]);
void seats(int idt);   

   
void main(void)
{
	system("color F1");
	
	int i, x, idt;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                            WELCOME TO JINNAH INTERNATIONAL AIRPORT!\n");
	printf("                                                  CIVIL AVIATION AUTHORITY\n");
	printf("                                                           KARACHI\n");
	sleep(3);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Your ID: ");
	scanf("%d",&idt);
	
	for(i=0;i<50;i++)
	{
		if(d[i].id==idt)
		{
			printf("\t\t\t\t\t\tId Verified!");
			sleep(1);
			system("cls");
			printf("                               			           Menu\n");
			printf("________________________________________________________________________________________________________________________\n");
			printf("1:Seat Managment\n");
			printf("2:Flight Information\n");
			printf("3:Proceed\n");
			printf("Option selected: ");
			scanf("%d",&x);
			printf("________________________________________________________________________________________________________________________\n");
				
			sleep(1);
			system("cls");
			
			switch(x)
			{
				case 1:
					seats(idt);
				break;
				
				case 2:
					flightinfo(idt);
				break;
				
				case 3:
					procs(idt);
				break;	
			}
			break;
		}
		
		else if(idt>50)
		{
			printf("\t\t\t\t\t\tID not found!\n\n\n\n\n\n\n\n\n\n\n\n");
			return;
		}
	}
}   

//Seat Management
void seats(int idt)
{
	int i, flag=1;
	char a, st[3],temp[3];
	
	i=idt-1;
	
	//Seats Unoccupied
	
	char *pew[5]={"a13", "c7", "c8", "d3", "d9"};
	char *lhr[9]={"a2", "a10", "b1", "b8", "c3", "c7", "d6", "d8", "d12"};
	char *uet[7]={"a12", "b7", "c4", "c7", "c9", "d9", "d13"};
	char *isl[4]={"b4", "b10", "c4", "c9"};
	char *swt[8]={"a6", "b2", "b12", "c5", "c7", "d3", "d11", "d13"};
	
    printf("                                                 SEAT MANAGEMENT:\n");
    printf("________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\tYour seat is %s\n\n\n",d[i].seats);
    printf("Do you want change your seat (Press 'Y' if Yes and 'N' if No)? ");
    scanf(" %c",&a);
    
    switch(a)
    {
    	case 'Y':
    		if(d[i].time==1800)
    		{
    			strcpy(temp,d[i].seats);
    			
    			printf("Seats available:\n");
    			for(i=0;i<5;i++)
    			{
    				printf("%s\t", pew[i]);
				}
				printf("\n");
				
				printf("Enter the desired seat:");
				a:
				scanf("%s",st);
				
				for(i=0;i<5;i++)
    			{
					if(strcmp(pew[i],st)==0)
					{
						flag=0;
					}
				}
				
				if(flag==0)
				{
					strcpy(d[i].seats,st);
				
				for(i=0;i<5;i++)
    			{
					if(pew[i]==st)
					{
						strcpy(pew[i],temp);
					}
				}
								
				printf("Seat changed!\n");
				}
				else
				{
					printf("Invalid Input! Enter correct seat.\n");
					goto a;
				}
				printf("________________________________________________________________________________________________________________________\n");
				
				sleep(1);
				system("cls");
				
				flightinfoch(idt, st);
				return;
			}
			
			
			if(d[i].time==0745)
    		{
    		    printf("Seats available:\n");
    			for(i=0;i<4;i++)
    			{
    				printf("%s\t",isl[i]);
				}
				printf("\n");
				
				printf("Enter the desired seat:");
				b:
				scanf("%s",st);
				
				for(i=0;i<4;i++)
    			{
					if(strcmp(isl[i],st)==0)
					{
						flag=0;
					}
				}
				
				if(flag==0)
				{
					strcpy(d[i].seats,st);
				
				for(i=0;i<4;i++)
    			{
					if(isl[i]==st)
					{
						strcpy(isl[i],temp);
					}
				}
								
				printf("Seat changed!\n");
				}
				else
				{
					printf("Invalid Input! Enter correct seat.\n");
					goto b;
				}
				printf("________________________________________________________________________________________________________________________\n");
				
				sleep(1);
	            system("cls");
					
				flightinfoch(idt, st);
				return;
			}
			
			
			if(d[i].time==1200)
    		{
    			printf("Seats available:\n");
    			for(i=0;i<9;i++)
    			{
    				printf("%s\t",lhr[i]);
				}
				printf("\n");
				
				printf("Enter the desired seat:");
				c:
				scanf("%s",st);
				
				for(i=0;i<9;i++)
    			{
					if(strcmp(lhr[i],st)==0)
					{
						flag=0;
					}
				}
				
				if(flag==0)
				{
					strcpy(d[i].seats,st);
				
				for(i=0;i<9;i++)
    			{
					if(lhr[i]==st)
					{
						strcpy(lhr[i],temp);
					}
				}
								
				printf("Seat changed!\n");
				}
				else
				{
					printf("Invalid Input! Enter correct seat.\n");
					goto c;
				}
				printf("________________________________________________________________________________________________________________________\n");
				
				sleep(1);
				system("cls");
				
				flightinfoch(idt, st);
				return;
			}
			
			
			if(d[i].time==0250)
    		{
    			printf("Seats available:\n");
    			for(i=0;i<8;i++)
    			{
    				printf("%s\t",swt[i]);
				}
				printf("\n");
				
				printf("Enter the desired seat:");
				d:
				scanf("%s",st);
				
				for(i=0;i<8;i++)
    			{
					if(strcmp(swt[i],st)==0)
					{
						flag=0;
					}
				}
				
				if(flag==0)
				{
					strcpy(d[i].seats,st);
				
				for(i=0;i<8;i++)
    			{
					if(swt[i]==st)
					{
						strcpy(swt[i],temp);
					}
				}
								
				printf("Seat changed!\n");
				}
				else
				{
					printf("Invalid Input! Enter correct seat.\n");
					goto d;
				}
				printf("________________________________________________________________________________________________________________________\n");
				
				sleep(1);
				system("cls");
				
				flightinfoch(idt, st);
				return;
			}
			
			
			if(d[i].time==1530)
    		{
    			printf("Seats available:\n");
    			for(i=0;i<7;i++)
    			{
    				printf("%s\t",uet[i]);
				}
				printf("\n");
				
				printf("Enter the desired seat:");
				e:
				scanf("%s",st);
				
				for(i=0;i<7;i++)
    			{
					if(strcmp(uet[i],st)==0)
					{
						flag=0;
					}
				}
				
				if(flag==0)
				{
					strcpy(d[i].seats,st);
				
				for(i=0;i<7;i++)
    			{
					if(uet[i]==st)
					{
						strcpy(uet[i],temp);
					}
				}
								
				printf("Seat changed!\n");
				}
				else
				{
					printf("Invalid Input! Enter correct seat.\n");
					goto e;
				}
				printf("________________________________________________________________________________________________________________________\n");
				
				sleep(1);
				system("cls");
				
				flightinfoch(idt, st);
				return;
			}
    	break;
		
		case 'N':
			sleep(1);
			system("cls");
			
			flightinfo(idt);
		break;	
	}
}
   
   
//Flight Information   
void flightinfo(int idt)
{
	int i;
	
	i=idt-1;

    printf("                                                FLIGHT INFORMATION:\n");
    printf("________________________________________________________________________________________________________________________\n");
	printf("Plane number:%s\n",d[i].plane);
	printf("Time:%d\n",d[i].time);
	printf("Destination:%s\n",d[i].destination);
	printf("Gate number:%d\n",d[i].gate);
	printf("________________________________________________________________________________________________________________________\n");
	
	sleep(5);
	system("cls");
	procs(idt);
}

void flightinfoch(int idt, char st[3])
{
	int i;
	
	i=idt-1;
	
	strcpy(d[i].seats,st);

    printf("                                                  FLIGHT INFORMATION:\n");
    printf("________________________________________________________________________________________________________________________\n");
	printf("Plane number:%s\n",d[i].plane);
	printf("Time:%d\n",d[i].time);
	printf("Destination:%s\n",d[i].destination);
	printf("Gate number:%d\n",d[i].gate);
	printf("________________________________________________________________________________________________________________________\n");
	
	sleep(5);
	system("cls");
	procsch(idt,st);
}



//Proceedings
void procs(int idt)
{
	char a;
	float w, x, p;
	int i, o, s=1;
	
	printf("Are you travelling with Handcarry or Luggage (Press 'H' for Handcarry and 'L' for Luggage)? ");
    scanf(" %c",&a);
    
    switch(a)
    {
    case 'L':
    system("cls");
    
	i=idt-1;
	
	while(s!=0)
	{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tEnter the weight of your luggage: ");
	scanf("%f",&w);
	
	if(w<=30.0)
	{
		s=1;
		
	 	system("cls");
	 	system("color 8F");
	    printf("                                            LUGGUAGE TAG:\n");
	    printf("_______________________________________________________________________________________________________________________\n");
	    printf("Plane number:%s                                                                                XYZ AIRLINE\n",d[i].plane);
	    printf("Time:%d\n",d[i].time);
	    printf("Destination:%s\n",d[i].destination);
	 	printf("Weight of this luggage:%.2f kg\n",w);
	 	printf("_______________________________________________________________________________________________________________________\n");
	 	sleep(5);
	 	system("cls");
		board(idt);
		return;
	}
	else
	{
		printf("Weight has exceeded the limit!\nWould you like to\t1. Reduce the limit to 30 kg or less\t2. Pay for excess luggage\nOption selected:");
		scanf("%d",&o);
		
		switch(o)
		{
			case 1:
				system("cls");
				s=1; 
			break;
			
			case 2:
				x=w-30;
		        p=x*800;
		        
		        s=0;
		        
		        printf("Please proceed towards %d check-in counter and pay Rs. %.3f to check-in\n\n",d[i].gate, p);
		        sleep(5);
	            system("cls");
	            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tThank you!\n\n\n\n\n\n\n\n\n\n\n\n");
		        return;
			break;	
		}
	}
}
	break;
	
	case'H':
		system("cls");
		board(idt);
	break;	
}
}

void procsch(int idt, char st[3])
{
	char a;
	float w, x, p;
	int i, o, s=1;
	
	printf("Are you travelling with Handcarry or Luggage (Press 'H' for Hancarry and 'L' for Luggage)? ");
    scanf(" %c",&a);
	
    switch(a)
    {
    case 'L':
    system("cls");	
	
	i=idt-1;
	
	while(s!=0)
	{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tEnter the weight of your luggage: ");
	scanf("%f",&w);
	
	if(w<=30)
	{
	 	system("cls");
	 	system("color 8F");
	 	printf("                                              LUGGUAGE TAG:\n");
		printf("________________________________________________________________________________________________________________________\n");
	    printf("Plane number:%s                                                                                XYZ AIRLINE\n",d[i].plane);
	    printf("Time:%d\n",d[i].time);
	    printf("Destination:%s\n",d[i].destination);
	 	printf("Weight of this luggage:%.2f kg\n",w);
	 	printf("________________________________________________________________________________________________________________________\n");
	 	sleep(5);
	 	system("cls");
		boardch(idt,st);
		return;
	}
	else
	{
		printf("Weight has exceeded the limit!\nWould you like to\t1. Reduce the limit to 30 kg or less\t2. Pay for excess luggage\nOption selected:");
		scanf("%d",&o);
		
		switch(o)
		{
			case 1:
				system("cls");
				s=1; 
			break;
			
			case 2:
				x=w-30;
		        p=x*800;
		        
		        s=0;
		        
		        printf("Please proceed towards %d check-in counters and pay Rs. %.3f to check-in\n\n",d[i].gate, p);
		        sleep(5);
	            system("cls");
	            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tThank you!\n\n\n\n\n\n\n\n\n\n\n\n");
		        return;
			break;	
		}
	}
}
    break;

    case 'H':
    	system("cls");
    	boardch(idt,st);
    break;
  }
}



//Printing Boarding Pass
void board(int idt)
{
	int i;
	
	i=idt-1;
	
	system("color 70");
	
	printf("                                                BOARDING PASS:\n");
	printf("________________________________________________________________________________________________________________________\n");
	printf("Passanger name: %s                                                                            JNA\n",d[i].name);
	printf("Plane number:%s                                                                    JINNAH INTERNATIONAL AIRPORT\n",d[i].plane);
	printf("Time:%d                                                                               CIVIL AVIATION AUTHORITY\n",d[i].time);
	printf("Destination:%S                                                                                 XYZ AIRLINE\n",d[i].destination);
	printf("Seat number:%s\n",d[i].seats);
	printf("Gate number:%d\n",d[i].gate);
	printf("________________________________________________________________________________________________________________________\n");
	
	sleep(5);
	system("cls");
	system("color F1");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tHave a safe flight! :)\n\n\n\n\n\n\n\n\n\n\n\n");
}   

void boardch(int idt, char st[3])
{
	int i;
	
	i=idt-1;
	
	system("color 70");
	
	printf("                                                BOARDING PASS:\n");
	printf("________________________________________________________________________________________________________________________\n");
	printf("Passanger name: %s                                                                            JNA\n",d[i].name);
	printf("Plane number:%s                                                                    JINNAH INTERNATIONAL AIRPORT\n",d[i].plane);
	printf("Time:%d                                                                               CIVIL AVIATION AUTHORITY\n",d[i].time);
	printf("Destination:%S                                                                                 XYZ AIRLINE\n",d[i].destination);
	printf("Seat number:%s\n",d[i].seats);
	printf("Gate number:%d\n",d[i].gate);
	printf("________________________________________________________________________________________________________________________\n");
	
	sleep(5);
	system("cls");
	system("color F1");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tHave a safe flight! :)\n\n\n\n\n\n\n\n\n\n\n\n");
}   
