#include <iostream>

using namespace std;

int main()
{
   /*int x,n;
   cout<<"Enter the number of items :\n";
   cin>>n;
   int *arr=new
   int(n);
   cout<<"ENter "<<n<<"items "<<endl;
   for(x=0;x<n;x++){
    cin>>arr[x];

   }

   cout<<"You entered :";
   for(x=0;x<n;x++){
   cout<<arr[x]<<" ";
}
    return 0;
}
int x;
int *array{ new int [5]{10, 7, 15, 3,  11 } };
cout<<"Array elements: "<<endl;
for(x=0;x<5;x++){
    cout<<array[x]<<endl;

}*/
int x,n;
cout<<"How many elements will you type? ";
cin>>n;
int *arr=new int(n);
cout<<"Enter "<<n<<"numbers"<<endl;
for(x=0;x<n;x++){
    cin>>arr[x];

}
cout<<"Ypu typed:"<<endl;
for(x=0;x<n;x++){
    cout<<arr[x]<<" "<<endl;

}
cout<<endl;
delete[]arr;
return 0;
}
