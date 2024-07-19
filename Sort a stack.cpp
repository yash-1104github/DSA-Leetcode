void  SortInsert(stack<int>& s, int temp){
        if(s.size() == 0 || temp > s.top()){
            s.push(temp);
            return;
        }
           int a = s.top();
           s.pop();
           SortInsert(s ,temp);
           s.push(a);
    }

void SortedStack :: sort(){
    if (s.empty()) return;
      int temp = s.top();
        s.pop();
       sort();
    SortInsert(s,temp);
}
