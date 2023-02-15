#include <bits/stdc++.h>
#include <stack>
#include <string>

std::string encodeString(std::string s) {
  std::stack<char> st;

  for (int i = 0; i < s.length(); i++)
    st.push(s[i]);

  std::string res = "";

  while (!st.empty()) {
    std::string temp = "";
    if (st.size() % 2 != 0) {
      res = st.top() + res;
      st.pop();
    }

    int n = st.size();

    if (!st.empty() && st.top() == s[(n - 1) / 2]) {
      int i = (n - 1) / 2;
      int j = st.size() / 2;

      while (i >= 0 && st.size() > j && st.top() == s[i]) {
        temp = st.top() + temp;
        st.pop();
        i--;
      }

      if (i == -1) {
        res = "*" + res;
      } else {
        res = temp + res;
      }
    } else {
      if (!st.empty()) {
        res = st.top() + res;
        st.pop();
      }
    }
  }
  return res;
}

int main() {
  std::cout << "Hello World!\n";
  std::string str;
  std::cin >> str;

  std::cout << encodeString(str);
  return 0;
}
