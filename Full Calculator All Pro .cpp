#include<iostream>
#include<conio.h>
using namespace std;
int additionFuntion();
int SubtractionFuntion();
int MultiplectionFuntion();
int DivitionFuntion();
int ReminderFuntion();
int Factorialfunction();

//Manu Function

char ManuFunction(){
    int a;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplection" << endl;
    cout << "4. Divition" << endl;
    cout << "5. Reminder" << endl;
    cout << "6. Factorial Of Number" << endl;
    cout << "7. Exit" << endl;
    cout << "_____________________________" << endl;
    cout << "" << endl;
    cout << "Enter Function : ";
    cin >> a;
   cout << "_____________________________" << endl;
    if(a==1){
    additionFuntion();
    }else if(a==2){
    SubtractionFuntion();
    } else if(a==3){
    MultiplectionFuntion();
    } else if(a==4){
    DivitionFuntion();
    } else if(a==5){
    ReminderFuntion();
    } else if(a==6){
    Factorialfunction();
    }
    else if(a==7){
        cout << "________________GoodBay______________" << endl;
    }
}

// Additional Function

int additionFuntion(){
    cout << "Addition Program" << endl;
   cout << "_____________________________" << endl;
    int input1,input2;
    char optionBack;
    cout << "Enter First Number : ";
    cin >> input1;
    cout << "Enter Sacend Number : ";
    cin >> input2;
    cout << "Addition is : ";
    cout << input1 <<" + "<<input2<<" = "<<input1 + input2 << endl;
    cout << "press y to continue or any key to quit : " ;
    cin >> optionBack;
    if(optionBack=='y'){
        ManuFunction();
    }else{cout << "______________GoodBay!_____________" << endl;}
    cout << "" << endl;
   cout << "_____________________________" << endl;
}

//Subtraction Function

int SubtractionFuntion(){
    cout << "Subtraction Program" << endl;
   cout << "_____________________________" << endl;
    int input1,input2;
    char optionBack;
    cout << "Enter First Number : ";
    cin >> input1;
    cout << "Enter Sacend Number : ";
    cin >> input2;
    cout << "Subtraction is : ";
    cout << input1 <<" - "<<input2<<" = "<<input1 - input2 << endl;
    cout << "press y to continue or any key to quit : " ;
    cin >> optionBack;
    if(optionBack=='y'){
        ManuFunction();
    }else{cout << "___________GoodBay!____________" << endl;}
    cout << "" << endl;
   cout << "_____________________________" << endl;
}

//Multiplection Function

int MultiplectionFuntion(){
    cout << "Multiplection Program" << endl;
   cout << "_____________________________" << endl;
    int input1,input2;
    char optionBack;
    cout << "Enter First Number : ";
    cin >> input1;
    cout << "Enter Sacend Number : ";
    cin >> input2;
    cout << "Multiplection is : ";
    cout << input1 <<" * "<<input2<<" = "<<input1 * input2 << endl;
    cout << "press y to continue or any key to quit : " ;
    cin >> optionBack;
    if(optionBack=='y'){
        ManuFunction();
    }else{cout << "___________GoodBay!___________" << endl;}
    cout << "" << endl;
   cout << "_____________________________" << endl;
}

//Divition Function

int DivitionFuntion(){
    cout << "Division Program" << endl;
   cout << "_____________________________" << endl;
    int input1,input2;
    char optionBack;
    cout << "Enter First Number : ";
    cin >> input1;
    cout << "Enter Sacend Number : ";
    cin >> input2;
    cout << "Division is : ";
    cout << input1 <<" / "<<input2<<" = "<<input1 / input2 << endl;
    cout << "press y to continue or any key to quit : " ;
    cin >> optionBack;
    if(optionBack=='y'){
        ManuFunction();
    }else{cout << "____________GoodBay!____________" << endl;}
    cout << "" << endl;
   cout << "_____________________________" << endl;
}

//Reminder Function

int ReminderFuntion(){
    cout << "Reminder Program" << endl;
   cout << "_____________________________" << endl;
    int input1,input2;
    char optionBack;
    cout << "Enter First Number : ";
    cin >> input1;
    cout << "Enter Sacend Number : ";
    cin >> input2;
    cout << "Reminder is : ";
    cout << input1 <<" % "<<input2<<" = "<<input1 % input2 << endl;
    cout << "press y to continue or any key to quit : " ;
    cin >> optionBack;
    if(optionBack=='y'){
        ManuFunction();
    }else{cout << "___________GoodBay!____________" << endl;}
    cout << "" << endl;
   cout << "_____________________________" << endl;
}

//Factorial of number Function

int Factorialfunction(){
    int n,i;
    int f = 1;
    char optionBack;
    cout << "Enter Factorial Number : " ;
    cin >> n;
    for(i=1;i<=n;i++){
        f=f*i;
        cout << "Factorial is : " << n<<" is "<<f<<endl;
    }
    cout << "press y to continue or any key to quit : " ;
    cin >> optionBack;
    if(optionBack=='y'){
        ManuFunction();
    }else{cout << "___________GoodBay!__________" << endl;}
    cout << "" << endl;
   cout << "_____________________________" << endl;
}
int main()
{
    ManuFunction();
    return 0;
}