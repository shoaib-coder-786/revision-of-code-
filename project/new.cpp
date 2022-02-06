#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
 
#define INFINITY 9999
#define MAX 5
void items();
void ccolor(int clr);
void pwellcome();
void loadingbar();
void cls();
void dijkstra(int G[MAX][MAX],int n,int startnode);
int G[MAX][MAX] = { {0,10,0,15,100},
{25,0,50,0,0},
{0,55,0,20,60},
{30,0,80,0,70},
{110,0,40,65,0}};
struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];
int order_count = 0, served_count = 0, waiting_now = 0;
int order ()
{
    int n, in, qu;
    printf ("please enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 10000+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    level:
    printf ("How many items you want to order? ");
    scanf ("%d", &n);
    getchar ();
    while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
            case 11 : {
                printf ("Enter the size of burger: 1. 200gm  2. 300gm\n");
                int i;
                scanf ("%d", &i);
                getchar();
                printf ("Please enter the quantity: ");
                scanf ("%d", &qu);
                getchar();
                p[order_count].number_of_food +=qu;
                if (i==1) p[order_count].cost += (130*qu);
                else p[order_count].cost += (180*qu);
                break;
            }
            case 12 :{
                printf ("Enter the size of Chicken Pizza: 1. 12inch  2. 14inch  3. 16inch\n");
                int i;
                scanf ("%d", &i);
                getchar();
                printf ("Please enter the quantity: ");
                scanf ("%d", &qu);
                getchar();
                p[order_count].number_of_food +=qu;
                if (i==1) p[order_count].cost += (750*qu);
                else if (i==2) p[order_count].cost += (975*qu);
                else  p[order_count].cost += (1250*qu);
                break;
            }
            case 13 :{
                printf ("Enter the amount of chicken: 1. 1 pcs  2. 4 pcs  3. 10 pcs\n");
                int i;
                scanf ("%d", &i);
                getchar();
                printf ("Please enter the quantity: ");
                scanf ("%d", &qu);
                getchar();
                p[order_count].number_of_food +=qu;
                if (i==1) p[order_count].cost += (85*qu);
                else if (i==2) p[order_count].cost += (320*qu);
                else  p[order_count].cost += (790*qu);
                break;
            }
            case 14 :{
                printf ("Enter the size of grilled chicken: 1. quarter  2. half  3. full\n");
                int i;
                scanf ("%d", &i);
                getchar();
                printf ("Please enter the quantity: ");
                scanf ("%d", &qu);
                getchar();
                p[order_count].number_of_food +=qu;
                if (i==1) p[order_count].cost += (70*qu);
                else if (i==2) p[order_count].cost += (140*qu);
                else  p[order_count].cost += (250*qu);
                break;
            }
            case 15 :{
                printf ("Enter the size of Noodles: 1. half  2. full\n");
                int i;
                scanf ("%d", &i);
                getchar();
                printf ("Please enter the quantity: ");
                scanf ("%d", &qu);
                getchar();
                p[order_count].number_of_food +=qu;
                if (i==1) p[order_count].cost += (130*qu);
                else p[order_count].cost += (250*qu);
                break;
            }
            case 16 :{
                printf ("Enter the size of pasta: 1. half  2. full\n");
                int i;
                scanf ("%d", &i);
                getchar();
                printf ("Please enter the quantity: ");
                scanf ("%d", &qu);
                getchar();
                p[order_count].number_of_food +=qu;
                if (i==1) p[order_count].cost += (120*qu);
                else p[order_count].cost += (240*qu);
                break;
            }
            case 17 : {
                printf ("250 mg of OREO SHAKE\n");
                printf ("Please enter the quantity: ");
                scanf ("%d", &qu);
                getchar();
                p[order_count].number_of_food +=qu;
                p[order_count].cost += (180*qu);
                break;
            }
            case 18 : {
                printf ("250 mg of Cold Coffee\n");
                printf ("Please enter the quantity: ");
                scanf ("%d", &qu);
                getchar();
                p[order_count].number_of_food +=qu;
                p[order_count].cost += (65*qu);
                break;
            }
            case 19 : {
                printf ("250 mg of Cappuccino\n");
                printf ("Please enter the quantity: ");
                scanf ("%d", &qu);
                getchar();
                p[order_count].number_of_food +=qu;
                p[order_count].cost += (70*qu);
                break;
            }
            case 20 :{
                printf ("Enter the size of Coke: 1. 250mg  2. 500mg\n");
                int i;
                scanf ("%d", &i);
                getchar();
                printf ("Please enter the quantity: ");
                scanf ("%d", &qu);
                getchar();
                p[order_count].number_of_food +=qu;
                if (i==1) p[order_count].cost += (20*qu);
                else p[order_count].cost += (30*qu);
                break;
            }
            default : {
                printf ("Invalid selection try again\n");
                n++;
            }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf("1:Borivali 2:Kandivali 3:Malad 4:Dahisar 5:Goregaon");
    printf("\nEnter Your Area no.: ");
    int u,i,j;
    int ant=5;
    scanf("%d",&u);
 
    dijkstra(G,ant,u);
        // printf("Enter number of Path which u want to be selected!!!!!!");
        // int a;
        // scanf("%d",&a);
    printf ("\nThank you %s for your order. Your bill is %drs.\nPlease wait while we prepare the food.\n\n ", p[order_count].name, p[order_count].cost);
    order_count ++;
}
int receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return -1;
    }
    else if (served_count == order_count) {
        printf ("All order served\n");
        return -1;
    }
    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
void items ()
{
    printf("..................................MENU....................................\n");
    printf("Item Code#   Description-------------------Size--------------------Price(Rs)\n");
    printf("[11]---------Burger---------------------200/300gm------------------130/180\n");
    printf("[12]---------Chicken Pizza--------------12/14/16inch---------------750/975/1250\n");
    printf("[13]---------Fried Chicken--------------1/4/10 pcs-----------------85/320/790\n");
    printf("[14]---------Grilled Chicken------------quarter/half/full----------70/140/250\n");
    printf("[15]---------Noodles--------------------Half/Full------------------130/250\n");
    printf("[16]---------Pasta----------------------Half/Full------------------120/240\n");
    printf("[17]---------Oreo Shake-----------------250mg----------------------180\n");
    printf("[18]---------Cold Coffee----------------250mg----------------------65\n");
    printf("[19]---------Cappuccino-----------------250mg----------------------70\n");
    printf("[20]---------Coke-----------------------250/500mg------------------20/30\n\n");
}
int main ()
{
 
    loadingbar();
    cls();
    pwellcome();
    Sleep(300);
    cls();
 
    printf ("\t\t     Welcome To Cafe Aroma\n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");
        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                   // system ("COLOR 2");
                printf ("We are closed come by again\n\n");
                return 0;
            }
        }
    }
}
void dijkstra(int G[MAX][MAX],int n,int startnode) //path dekh raha hai with time
{
    int cost[MAX][MAX],distance[MAX],pred[MAX];
    int visited[MAX],count,mindistance,nextnode,i,j;
//pred[] stores the predecessor of each node
//count gives the number of nodes seen so far
//create the time matrix
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(G[i][j]==0)
                cost[i][j]=INFINITY;
            else
                cost[i][j]=G[i][j];
//initialize pred[],distance[] and visited[]
            for(i=0;i<n;i++)
            {
                distance[i]=cost[startnode][i];
                pred[i]=startnode;
                visited[i]=0;
            }
            distance[startnode]=0;
            visited[startnode]=1;
            count=1;
            while(count<n-1)
            {
                mindistance=INFINITY;
//nextnode gives the node at minimum distance
                for(i=0;i<n;i++)
                    if(distance[i]<mindistance&&!visited[i])
                    {
                        mindistance=distance[i];
                        nextnode=i;
                    }
 
//check if a better path exists through nextnode
                    visited[nextnode]=1;
                    for(i=0;i<n;i++)
                        if(!visited[i])
                            if(mindistance+cost[nextnode][i]<distance[i])
                            {
                                distance[i]=mindistance+cost[nextnode][i];
                                pred[i]=nextnode;
                            }
                            count++;
                        }
 
//print the path and distance of each node
                        for(i=0;i<startnode;i++)
                            if(i!=startnode)
                            {
 
                                printf("\nDistance of destination=%d mins",distance[i]);
                                printf("\nCafeAroma");
 
                                j=i;
                                do
                                {
                                    j=pred[j];
                                    printf("<-%d",j);
                                }while(j!=startnode);
 
                            }
                            int min;
                            min=distance[0];
                            for(i=1;i<startnode;i++)
                            {
 
                                if(min>distance[i])
                                {
                                    min=distance[i];
                                }
 
                            }
                            printf("\nMinimum time is %d mins",min);
}
 
 
void pwellcome(){
    ccolor(26);
       
    char welcome[50]="WELCOME";
    char welcome2[50]=" TO";
    char welcome3[50]=" FOOD ORDER";
    char welcome4[50]=" MANAGEMENT SYSTEM";
    printf("\n\n\n\n\n\t\t\t");
    for(int wlc=0; wlc<strlen(welcome);wlc++){
            //  ccolor(120+(wlc*9));
        system("color E4");
        printf(" %c",welcome[wlc]);
        Sleep(200);
    }
    ccolor(26);
    printf("\n\n\t\t\t\t ");
    for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){
            // ccolor(160+(wlc2*9));
        system("color E4");
        printf(" %c",welcome2[wlc2]);
        Sleep(200);
    }
    ccolor(26);
    printf("\n\n\n\t\t\t ");
    for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
        if(welcome3[wlc3]!='D'){
            // ccolor(121+(wlc3*4));
            system("color E4");
            printf(" %c",welcome3[wlc3]);
        }
        else{
            // ccolor(11);
            system("color E4");
            printf(" %c",welcome3[wlc3]);
        }
 
        Sleep(200);
    }
    ccolor(26);
    printf("\n\n\n\t\t\t\t ");
    for(int wlc3=0; wlc3<strlen(welcome4) ;wlc3++){
        if(welcome4[wlc3]!='A' && welcome4[wlc3]!='E'){
                // ccolor(121+(wlc3*4));
            system("color E4");
            printf(" %c",welcome4[wlc3]);
        }
        else{
            // ccolor(11);
            system("color E4");
            printf(" %c",welcome4[wlc3]);
        }
        Sleep(200);
    }
    // ccolor(26);
    system("color 3A");
}
 
void loadingbar(void){
 
    for (int i=15;i<=100;i+=5){
 
        cls();
        ccolor(26);
 
        printf("\n\n\n\n\n\n\n\t\t\t\t");
        printf("%d %% Loading...\n\n\t\t",i);
 
        printf("");
 
        for (int j=0; j<i;j+=2){
 
            ccolor(160+j);
            printf(" ");
            ccolor(26);
 
        }
        Sleep(100);
        if(i==90 || i==50 || i==96 || i==83){
            Sleep(100);
        }
 
    }
 
}        
 
void cls(){
    system("cls");
}
 
void ccolor(int clr){
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, clr);
}
