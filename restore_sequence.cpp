    #include<bits/stdc++.h>
    using namespace std;

    void get_prime(long long n, vector<int> &prime_vector)
    {
        vector<bool> prime(n+1 ,true); 
        prime[0] = false; 
        prime[1] = false; 
    
        for (long long p=2; p*p<=n; p++) 
        { 
        
            // If prime[p] is not changed, then it 
            // is a prime  
            if (prime[p]) 
            { 
                // Update all multiples of p 
                for (long long i=p*p; i<=n; i += p) 
                prime[i] = false; 
            } 
        } 
    
        // push all the primes into the vector ans 
        for (long long i=2; i<=n; i++) 
            if (prime[i]) 
                prime_vector.push_back(i); 

        // for(int i=0; i<20; i++)
        //     cout<<prime_vector[i]<<"   ";            // just checking the prime are correct or not.
    }


    int main()
    {
        int t;
        cin>>t;

        vector<int> prime_vector;
        get_prime(1000000*4, prime_vector);

        while(t--)
        {
            int n;
            cin>>n;

            map<int, int> map;
            for(int i=0; i<n; i++)
            {
                int temp;
                cin>>temp;
                map[i+1] = temp;
            }


            vector<int> prime_of_size_n;
            copy(prime_vector.begin(), prime_vector.begin() + n, back_inserter(prime_of_size_n));     
            unordered_map<int, int> final_ans;

            for(int i=0; i<n; i++)
                final_ans[i+1]  = prime_of_size_n[i];
            
            for(int i=0; i<n; i++)
            {
                if(i+1 == map[i])
                    continue;
                
                final_ans[i+1] = final_ans[map[i+1]]; 
            }
            
            for(int i=0; i<n; i++)
                cout<<final_ans[i+1]<<" ";

            cout<<endl;
        }
    }