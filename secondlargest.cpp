
using namespace std;

class solution{
public:
    int secondLargestElement(int arr[], int n){
       int max=-1;
       
       int second=-1;
       for(int i=0;i<n;i++){
           if(arr[i]>max){
                 second=max;
               max=arr[i];
             
           }
           if(arr[i]<max && arr[i]>second){
               second=arr[i];
               
               
           }
       }
        return second;
        
    }
};