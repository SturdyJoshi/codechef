// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
    
//     while(t--)
//     {
//         long long x,y,l,r;
//         cin>>x>>y>>l>>r;
//         long long  l1=l , r1= r;
//         int lower = 0;
//         int higher = 0;

//         while(l)
//         {
//             lower++;
//             l=l/2;
//         }

//         while(r)
//         {
//             higher++;
//             r=r/2;
//         }
//         long long current_pro=0, ans=0, best_product=0;
    
//         for(int i=pow(2, higher-1);i<= pow(2, higher); i++)
//         {
//             long long possible_value = i;
//            if(possible_value >= l1 && possible_value <=r1)
//             {
//                 current_pro = (x & possible_value)*(y & possible_value);
//                 if(current_pro > best_product)
//                 {
//                         ans = possible_value;       
//                         best_product = current_pro;
//                         //  cout<<ans<<" "<<best_product<<" "<<endl;
//                 }
//             }
//         }

//         cout<<ans<<endl;
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; 
//     cin>> t ; 
//     while(t-- )
//     {
//         int x,y,l,r;
//         cin>>x>>y>>l>>r;

//         if(x>y && l>r)
//         {

//         }

//         else if( )
//         {

//         }


//     }
// }