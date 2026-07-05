// class Solution {
// public:
//     bool isValid(string str) {
//      stack<char> st;

//      for(int i =0; i<str.size(); i++){
//         if(str[i] == '(' || str[i] == '{' || str[i] =='['){
//             st.push(str[i]);
//         }
//         else{
//             if (st.size() == 0){
//                 return false;
//             }
//             if ((st.pop() == '(' && str[i] == ')'
//                 st.pop() == '{' && str[i] == '}'
//                 st.pop() == '[' && str[i] == ']' )){
//                     st.pop();
//                 }
//             else{
//                 return false;
//             }
//         }
//      } 
//     return st.size() == 0; 
//     }
// };
class Solution {
public:
    bool isValid(string str) {
        stack<char>st;

        for(int i = 0;i<str.size();i++){
            if(str[i] == '(' || str[i] == '{' || str[i] == '[' ){ //for opening brackets
                st.push(str[i]); //storing in stack
            }
            else{ //for closing brackets 
                if(st.size() == 0){
                    return false;
                }
                if((st.top() == '(' && str[i] == ')') || (st.top() == '{' && str[i] == '}') || (st.top() == '[' && str[i]== ']')){
                    st.pop();
                }
                else{ // no matches
                    return false;
                }
            }
        }
        return st.size() == 0; //for checking in last hamara stack ka value zero hai ya nhi 
    }
};



