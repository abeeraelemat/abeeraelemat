#include <iostream>
using namespace std;
//The system aims to help  user identify and diagnose diabetes:
void Glycosylated_A1C(){
// this function Examination of glycated hemoglobin 
	double ac1_val=0;
	double ac1[10];
	double ac1_sum[1];
	double ac1_sum_val=0;
	double ac1_avg[1];
	double ac1_avg_val=0;
	cout<<"---------------------A1C--------------------------"<<endl;
	cout<<" Examination of glycated hemoglobin :"<<endl;
	cout<<" You are asked to provide 10 blood sugar readings "<<endl;
	cout<<" If the reading rate is less than 5.7%, the normal rate."<<endl;
	cout<<" From 5.7% to 6.4% are diagnosed as prediabetes.."<<endl;
	cout<<" 6.5% or higher on two separate tests is diagnosed as diabetes."<<endl;
	cout<<"---------------------------------------------------- "<<endl;
	
	// loop for 10 blood sugar readings
	for(int i=9;i>=0;--i){
		cout<<"PLZ Enter blood diabetes test readings: "<<endl;
		cin>>ac1_val;
		ac1[i]=ac1_val;
		ac1_sum_val+=ac1_val;
		ac1_sum[0]=ac1_sum_val;
		cout<<endl;
		cout<<"readings left -->"<<i<<endl;		
	};
	// find average of 10 blood sugar readings
	ac1_avg_val=(ac1_sum_val/10);
	ac1_avg[0]=ac1_avg_val;
	int count=0;
	// compare based on average to determine the type of injury
	if (ac1_avg_val<5.7){
		cout<< ac1_avg_val<<"  is normal:)"<<endl;
	}
	else if (ac1_avg_val>=5.7 && ac1_avg_val<=6.4){
		cout<< ac1_avg_val<<"  Pre-diabetes :) "<<endl;	
	}
	
	else  {
             cout <<"this result of first test: "<<ac1_avg_val<<"must do another test plz"<<endl;
		     for(int i=9;i>=0;--i){
		         cout<<"PLZ Enter blood diabetes test readings: "<<endl;
		         cin>>ac1_val;
		         ac1[i]=ac1_val;
		         ac1_sum_val+=ac1_val;
		         ac1_sum[0]=ac1_sum_val;
		         cout<<endl;
		         cout<<"readings left-->"<<i<<endl;
		}
	         ac1_avg_val=(ac1_sum_val/10);
	         ac1_avg[1]=ac1_avg_val;
		     if ( ac1_avg_val>=6.5){
	         cout<< ac1_avg_val<< "   He has diabetes :("<<endl;
			 count+=1;	
		 }
	}
}
	    
void blood_level(){
// this function Fasting blood sugar level test.	
	cout<<"---------------------FBSLT--------------------------"<<endl;
	cout<<" Fasting blood sugar level test.:"<<endl;
	cout<<" You are asked to provide 1 blood sugar readings "<<endl;
	cout<<"of each blood sugar readings need (x mg/dL ) ,(x mmol/L) .  "<<endl;
	cout<<" The normal range is less than 100 mg/dL (5.6 mmol/L)."<<endl;
	cout<<" A level of 100 to 125 mg/dL (5.6 to 6.9 mmol/L) is diagnosed as prediabetes."<<endl;
	cout<<" A rate of 126 mg/dL (7.1 mmol/L) or higher in two separate tests diagnoses diabetes."<<endl;
	cout<<"----------------------------------------------------- "<<endl;

   double ac2_val=0;
   double ac2[1];
   double acl_val=0;
   double acl[1];
   cout<<"it only requires one reading :"<<endl;
   	cout<<"PLZ Enter FBSLT test readings (x mg/dL ) :"<<endl;
   	cin>>ac2_val;
   	ac2[0]=ac2_val;
   	cout<<"PLZ Enter FBSLT test readings (x mmol/L) :"<<endl;
   	cin>>acl_val;
   	acl[0]=acl_val;
// compare based on average to determine the type of injury
   	if (ac2_val<100 && acl_val<5.6){
		cout<<"(" <<ac2_val<<"mg/dL ) , " <<"(" <<acl_val<<"mmol/L) ,"<<"is normal:)"<<endl;
	}
	else if ((ac2_val>=100 && ac2_val<=125) ||(acl_val>=5.6 && acl_val<=6.9) ){
		cout<<"(" <<ac2_val<<"mg/dL ) , " <<"(" <<acl_val<<"mmol/L) ,"<< "Pre-diabetes 😐 "<<endl;	
	}
	
	else  {

		     cout<<"this result of first test: (" <<ac2_val<<"mg/dL ) , (" <<acl_val<<"mmol/L)  must do another test plz"<<endl;
		     cout<<"PLZ Enter FBSLT test readings (x mlgm\dl) :";
   	         cin>>ac2_val;
   	         cout<<"PLZ Enter FBSLT test readings (x mmleml\l) :";
           	 cin>>acl_val;
		     if ( ac2_val>=126 ||acl_val>= 7.0 ){
	         cout<<"(" <<ac2_val<<"mg/dL ) , " <<"(" <<acl_val<<"mmol/L)"<<"He has diabetes :("<<endl;	
		 }
		 
		 }
	
}		



void Oral_glucose_tolerance	(){
// this function Oral glucose tolerance test 	
	cout<<"---------------------OGTT--------------------------"<<endl;
	cout<<" Oral glucose tolerance test "<<endl;
	cout<<" You are asked to provide 6 blood sugar readings "<<endl;
	cout<<"of each blood sugar readings need (x mg/dL ) ,(x mmol/L) .  "<<endl;
	cout<<" The normal range is less than 140 mg/dL (7.8 mmol/L)."<<endl;
	cout<<" A level of 140 to 199 mg/dL (7.8 to 11.0 mmol/L) is diagnosed as prediabetes."<<endl;
	cout<<" A rate of 200 mg/dL (11.1 mmol/L) or higher in two separate tests diagnoses diabetes."<<endl;
	cout<<"----------------------------------------------------- "<<endl;
	
    double ogt_val=0;
    double ogt[6];
    double ogt_l_val=0;
    double ogt_l[6];
	double ogt_sum1_val=0;
	double ogt_sum1[1];
	double ogt_sum2_val=0;
	double ogt_sum2[1];
	double ogt_avg1_val=0;
	double ogt_avg1[1];
	double ogt_avg2_val=0;
	double ogt_avg2[1];
// loop for 6 blood sugar readings
	for(int n=5;n>=0;--n){
		cout<<"PLZ Enter blood test readings (x mg/dL ) "<<":";
		cin>>ogt_val;
		ogt[n]=ogt_val;
		cout<<"PLZ Enter blood test readings (x mmol/L) "<<":";
		cin>>ogt_l_val;
		ogt_l[n]=ogt_l_val;
		ogt_sum1_val+=ogt_val;
		ogt_sum1[0]=ogt_sum1_val;
		ogt_sum2_val+=ogt_l_val;
		ogt_sum2[0]=ogt_sum2_val;
		cout<<endl;
		cout<<"readings left -->"<<n<<endl;
	        };
		
			
	ogt_avg1_val=(ogt_sum1_val/6);
	ogt_avg1[0]=ogt_avg1_val;
	ogt_avg2_val=(ogt_sum2_val/6);
	ogt_avg2[0]=ogt_avg2_val;	
	int count=0;
// compare based on average to determine the type of injury
	if (ogt_avg1_val<140 ||ogt_avg2_val<7.8 ){
		cout<<"(" <<ogt_avg1_val<<"mg/dL ) , " <<"(" <<ogt_avg2_val<<"mmol/L)"<< "is normal:)"<<endl;
	}
	else if ((ogt_avg1_val>=140 && ogt_avg1_val<=199) ||(ogt_avg2_val>=7.8 && ogt_avg2_val<=11.0) ){
		cout<<"(" <<ogt_avg1_val<<"mg/dL ) , " <<"(" <<ogt_avg2_val<<"mmol/L)"<<"Pre-diabetes 😐 "<<endl;	
	}
	
	else  {
		cout<<"this result of first test: "<<"(" <<ogt_avg1_val<<"mg/dL ) , " <<"(" <<ogt_avg2_val<<"mmol/L)  "<<"must do another test plz"<<endl;

		     for(int n=5;n>=0;--n){
		cout<<"PLZ Enter blood test readings (x mlgm\dl ) "<<":";
		cin>>ogt_val;
		ogt[n]=ogt_val;
		cout<<"PLZ Enter blood test readings (x mmleml\l) "<<":";
		cin>>ogt_l_val;
		ogt_l[n]=ogt_l_val;
		ogt_sum1_val+=ogt_val;
		ogt_sum1[0]=ogt_sum1_val;
		ogt_sum2_val+=ogt_l_val;
		ogt_sum2[0]=ogt_sum2_val;
		cout<<endl;
		cout<<"readings left -->"<<n<<endl;
	        };
	         ogt_avg1_val=(ogt_sum1_val/6);
	         ogt_avg1[0]=ogt_avg1_val;
	         ogt_avg2_val=(ogt_sum2_val/6);
	         ogt_avg2[0]=ogt_avg2_val;
		     if ( ogt_avg1_val>=200 || ogt_avg2_val>=11.1){
	         cout<<"(" <<ogt_avg1_val<<"mg/dL ) , " <<"(" <<ogt_avg2_val<<"mmol/L)"<<"He has diabetes :("<<endl;
			 count+=1;	
		 }
		 }
	
	
}
void main_fun(){
// this function determine the type of test 
	string x;
	cout<<"plz Enter the test name ( A1C ,FBSLT or OGTT "<<endl;
	cin >>x;
	if (x=="A1C" || x=="a1c"){
		Glycosylated_A1C();
	}
	else if (x=="FBSLT" || x=="fbslt"){
		blood_level();
	}
	else if (x==" OGTT" || x=="ogtt"){
	    Oral_glucose_tolerance();	
	}else{
		cout<<" the name of test is wrong or not found ...."<<endl;
	}
}
string start_fun(){
// this function ask about user name and password to operate the system  
string user_name;
int pass_word;
cout<<" Plz Enter you user name :) ";
cin>>user_name;
cout<<endl;
cout<<" Plz Enter you password :) ";
cin>>pass_word;
string ask;
if (user_name=="nurse" && pass_word == 123456 ){
     	main_fun();
     	cout<< "are you do new test (yes or no) ";
        cin>>ask;
     	while( ask=="yes"){
     		main_fun();
     		cout<< "are you do new test (yes or no) ";
            cin>>ask;
		 }		 	
} 
else{
for (int y=2; y<=3; y++){
	cout<<endl;
	cout<<" Plz Enter you user name :) ";
    cin>>user_name;
    cout<<" Plz Enter you password :) ";
    cin>>pass_word;
	if (user_name=="nurse" && pass_word == 123456 ){
		main_fun();
		while( ask=="yes"){
     		main_fun();
     		cout<< "are you do new test (yes or no) ";
            cin>>ask;
		 }
		 
	}
}
	
}
cout<<" Thank you for using this system  :)     ";
}	

int main (){
	
start_fun();
	
return 0;
}