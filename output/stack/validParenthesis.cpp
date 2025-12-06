bool isValidParenthesis(string expression){
    stack<char>s;
    for(int i=0;i<expression.length();i++){
        char ch=expression[i];
        //if opening bracket, stack push
        //if close bracket. stackpop check and pop

        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            //for closing bracket
        //             Check the stack. The stack is not empty, and the top of the stack is top = '{'.
        // Mismatch: { does not match ].
        // Return: false immediately.
            if(!s.empty()){
                char top=s.top();
                if((ch==')' && top=='(')||(ch=='}' && top=='{')||(ch==']' && top=='[')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}