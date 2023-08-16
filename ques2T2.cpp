class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size(); 

        vector <int> diff;
        
        int gasSum = 0;
        int costSum = 0;

        for(int i = 0; i< n; i++){
            gasSum += gas[i];
            costSum += cost[i];

            int value = gas[i] - cost[i];
            diff.push_back(value);
            cout << value;

        }

        if(costSum > gasSum){
            return -1;
        }
        
        int i = gas.size()-1;

        int val = diff[i];

        // cout<< val;

        // int flag = 0;

        int maxNeg = val;

        for(int j = 0; j< i; j++){
            val += diff[j];
            if(val < maxNeg){
                maxNeg = val;
            }
            // cout << val;
        }

        

        val = maxNeg; 
        cout << val;

        if(val >= 0){
            return i;
        }

        
        int * arr = new int[n];
        
        int res = val;
        arr[n-1] = res;

        for(int j = n-2; j >= 0; j--){
            res = res + diff[j];
            arr[j] = res;
            if(res >= 0){
                return j;
            }
        }

        

        

        return -1;


        
        // for(int k = 0; k< indices.size(); k++){
        //     int i = indices[k];
        //     if(gas[i] < cost[i]){
        //         continue;
        //     }
        //     int initial = 0;

        //     int j = i;
        //     int count = 0;
        //     int flag = 1;
        //     while( count < gas.size() ){

                

        //         if(initial + gas[j% n] - cost[j% n] < 0){
        //             flag = 0;
        //             break;
        //         }

        //         else{
        //             initial = initial + gas[j % n] - cost[j % n];
        //             j++;
        //         }
        //         count++;

        //     }

        //     if(flag == 1){
        //         return i;
        //     }
            


        // }

        // return -1;
        
    }
};