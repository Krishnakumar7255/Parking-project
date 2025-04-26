//car parking
 #include<iostream>
 using namespace std;

 void home();
  void bike();
 void car();
 void truck();
 void jeep();
 void total();

int b=0,ca=0,t=0,j=0,c=0,rs=0,w,n=0;

int main()
 {
     cout<<"\t\t\t\t\t\tC A R   P A R K I N G"<<endl;
   while(1)
   {
   home();
   cout<<endl;
   }
    return(0);
 }

  void home()
 {
   cout<<"vehicle number :- "<<n<<endl;
   cout<<"Enter vehicle number by this way"<<endl;
   cout<<"Press 1 for bike:- "<<endl;
   cout<<"Press 2 for car:- "<<endl;
   cout<<"Press 3 for truck:- "<<endl;
   cout<<"Press 4 for Jeep:- "<<endl;
   cout<<"Press 5 for total income and vehicle:- "<<endl;

   cin>>w;

   switch(w)
   {
       case 1 : bike();
       break;
       case 2 : car();
       break;
       case 3 : truck();
       break;
       case 4 : jeep();
       break;
       case 5 : total();
       break;
       default : cout<<"Enter correct number"<<endl;
       break;
   }


 }

 void bike()
 {
     cout<<"You enter a bike"<<endl;
     cout<<"Bike charge for parking =rs 20"<<endl;
     b+=1;
     c+=20;
     n+=1;
 }

  void car()
 {
     cout<<"You enter a car"<<endl;
     cout<<"car charge for parking =rs 30"<<endl;
     ca+=1;
     c+=30;
     n+=1;
 }

  void truck()
 {
     cout<<"You enter a truck"<<endl;
     cout<<"truck charge for parking =rs 50"<<endl;
     t+=1;
     c+=50;
     n+=1;
 }

  void jeep()
 {
     cout<<"You enter a jeep"<<endl;
     cout<<"jeep charge for parking =rs 40"<<endl;
     j+=1;
     c+=40;
     n+=1;
 }
 void total()
 {   cout<<"\n\n\t\t C A R  R E V E N U E "<<endl;
     cout<<"Total income is rs "<<c<<endl;
     cout<<"Total no. of vehicles are :- \n Bike "<<b<<"\n car "<<ca<<"\n truck "<<t<<"\n Jeep "<<j<<"\nTotal vehicle= "<<b+ca+t+j<<endl;
     exit(0);
 }

