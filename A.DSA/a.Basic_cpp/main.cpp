

// taking input and output
class Solution {
public:
    void printNumber() {
        int n;
        cin >> n;
        cout << n;
    }
};



// if else
class Solution {
public:
    void isAdult(int age) {
        if(age>=18){
            cout << "Adult";
        }else{
            cout << "Teen";
        }
    }
};


// switch case

class Solution {
public:
    void whichWeekDay(int day) {
        switch(day){
            case 1:
                cout << "Monday";
                break;
            case 2:
                cout << "Tuesday";
                break;
            case 3:
                cout << "Wednesday";
                break;
            case 4:
                cout << "Thursday";
                break;
            case 5:
                cout << "Friday";
                break;
            case 6:
                cout << "Saturday";
                break;
            case 7:
                cout << "Sunday";
                break;
            default:
                cout << "Invalid";
                break;
        }  
    }
};


// arrya

class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return 0;
        return nums[0] + nums[len - 1];
    }
};

// loops and ifStatments

class Solution {
public:
    void printX(int X, int N) {
        if (N < 0) {
            cout << "Invalid number of times" << endl;
            return;
        }
        for(int i = 0; i<N; i++){
            cout << X;
            if(i<N-1){
                cout << " ";
            }
        }
        cout << endl;
    }
};

// more of array and char


class Solution{
    public:
        char lastChar(string& s){
            //your code goes here
            int len = s.size();
            return s[len - 1];
        }
};