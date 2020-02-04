#include "stack.cpp"
void action(stack<int> s);
void action1(stack<std::string> s);

int main(){
    int x;
    std::cout<<"Choose Your Data type \n 1.Interger \t 2.Float \n";

    std::cin>>x;
    switch(x){
        case 1:
        {
            stack<int> s;
            action(s);
        }

        case 2:
        {
            stack<std::string> s;
            action1(s);
        }
    }
}

int options(stack<int> s){
    int y;
    
    std::cout<<"Choose Your Action \n 1.Push \t 2.Top \t 3.Pop \t 4.Is Empty \t 5.Is Full \n ";
    std::cin>>y;
    return y;
}

void switcher(stack<int> s,int y)
{
    
    switch(y)
    {
        
        case 1:
        {
            int a,n;
            std::cout<<"Enter  No.of  Data You Want to Enter ";
            std::cin>>n;
            if(s.upMost+n>=maxSize) {std::cout<<"Reselect No. of data----Too many Data"; break;}
            for(int i=0;i<n;i++){
                std::cin>>a;
                s.push(a);
                
            }
            action(s);
            break;
        }
        case 2:
        {
            std::cout<<s.upMost;
            std::cout<<s.top()<<"\n";
            action(s);
            break;
        }  
        case 3:
        {
            int a,n;
            std::cout<<"Enter  No.of  Data You want to pop ";
            std::cin>>n;
            for(int i=0;i<n;i++){
                std::cout<<s.pop()<<"\t";
            }
            std::cout<<"\n";
            action(s);
            break;
        }
        case 4 :
        {
            if(s.isEmpty()) std::cout<<"True \n";
            else std::cout<<"false \n";
            action(s);
            break;
        }
        case 5 :
        {
            if(s.isFull()) std::cout<<"True \n";
            else std::cout<<"false \n";
            
            action(s);
            break;
        }
    }
}

void action(stack<int> s){
    switcher(s,options(s));  
}

// void action1(){
//     int y;
//     std::cout<<"Choose Your Action \n 1.Push \t 2.Top \t 3.Pop \t 4.Is Empty \t 5.Is Full \n "
//     std::cin>>y
//     switch(y){
//     case 1:
//         {
//             float a;
//             int n;
//             std::cout<<"Enter  No.of  Data You Want to Enter "
//             std::cin>>n;
//             if(n>maxSize) std::cout<<"Reselect No. of data----Too many Data" break;
//             for(int i=0;i<n;i++){
//                 cin>>a;
//                 s.pop(a);
//             }
//         }
//         case 2:
//         {
//             s.top(a);
//         }  
//         case 3:
//         {
//             int a,n;
//             std::cout<<"Enter  No.of  Data You want to pop "
//             std::cin>>n;
//             for(int i=0;i<n;i++){
//                 s.pop();
//             }
//         }
        
//         case 4 :
//         {
//             s.isEmpty();
//         }
//         case 5 :
//         {
//             s.isFull();
//         }
//     }
// }


int options1(stack<std::string> s){
    int y;
    std::cout<<"Choose Your Action \n 1.Push \t 2.Top \t 3.Pop \t 4.Is Empty \t 5.Is Full \n ";
    std::cin>>y;
    return y;
}

void switcher1(stack<std::string> s,int y)
{
    
    switch(y)
    {
        
        case 1:
        {
            std::string a;
            int n;
            std::cout<<"Enter  No.of  Data You Want to Enter ";
            std::cin>>n;
            if(s.upMost+n>=maxSize) {std::cout<<"Reselect No. of data----Too many Data"; break;}
            for(int i=0;i<n;i++){
                std::cin>>a;
                s.push(a);
            }
            action1(s);
            break;
        }
        case 2:
        {
            std::cout<<s.top()<<"\n";
            action1(s);
            break;
        }  
        case 3:
        {
            int n;
            std::cout<<"Enter  No.of  Data You want to pop ";
            std::cin>>n;
            for(int i=0;i<n;i++){
                std::cout<<s.pop()<<"\t";
            }
            std::cout<<"\n";
            action1(s);
            break;
        }
        case 4 :
        {
            if(s.isEmpty()) std::cout<<"True \n";
            else std::cout<<"false \n";
            action1(s);
            break;
        }
        case 5 :
        {
            if(s.isFull()) std::cout<<"True \n";
            else std::cout<<"false \n";
            
            action1(s);
            break;
        }
    }
}

void action1(stack<std::string> s){
    switcher1(s,options1(s));  
}