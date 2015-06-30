#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(){
	
    fstream data;
    data.open("file.in", ios::in);
    if(!data){
        cout<<"Fail to open file: "<<endl;
    }
    double bmi[20][2];
	for(int i=0;i<20;i++){
		for(int j=0;j<2;j++){
			bmi[i][j]=0;
			data>>bmi[i][j];
		}
	}
    for(int i=0;i<20;i++){
    	if(bmi[i][0]==0){
    		break;
		}
		bmi[i][0]=bmi[i][0]/100;
    	bmi[i][0]=bmi[i][0]*bmi[i][0];
    	bmi[i][0]=bmi[i][1]/bmi[i][0];
		
	}
	
	
	
	fstream type;
    type.open("file.out", ios::out);

        if(!type){
        cout<<"Fail to open file: "<<endl;
    	}

        for(int i=0;i<20;i++){
        	if(bmi[i][0]>=40){
        		type<<bmi[i][0]<<" Obese Class III (Very severely obese)"<<endl;
			}
			else if(bmi[i][0]>=35){
        		type<<bmi[i][0]<<" Obese Class II (Severely obese) "<<endl;
			}
			else if(bmi[i][0]>=30){
        		type<<bmi[i][0]<<" Obese Class I (Moderately obese) "<<endl;
			}
			else if(bmi[i][0]>=25){
        		type<<bmi[i][0]<<" Overweight  "<<endl;
			}
			else if(bmi[i][0]>=18.5){
        		type<<bmi[i][0]<<" Normal"<<endl;
			}
			else if(bmi[i][0]>=16){
        		type<<bmi[i][0]<<" Underweight"<<endl;
			}
			else if(bmi[i][0]>=15){
        		type<<bmi[i][0]<<" Severely underweight "<<endl;
			}			
			else{
        		type<<bmi[i][0]<<" Very severely underweight  "<<endl;
			}
		}
	
	
} 
