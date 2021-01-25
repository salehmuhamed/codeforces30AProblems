#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <string.h>
#include <sstream> 
#include <vector>
using namespace std;
  // Vanya and Fence                                          http://codeforces.com/contest/677/problem/A
  int VanyaAndFence() {

      int highOfFence = 0;
      int numberOfFriends = 0;
      int friendieshowmuch[1000];
      int result = 0;

      cin >> numberOfFriends;
      cin >> highOfFence;
      for (int i = 0; i < numberOfFriends; i++)
      {
          cin >> friendieshowmuch[i];


      }

      for (int i = 0; i < numberOfFriends; i++)
      {
          if (friendieshowmuch[i] > highOfFence)
          {
              result = result + 2;

          }
          else {
              result = result + 1;
          }
      }


      std::cout << result;
      return 0;

  }
  // Anton and Danik                                          http://codeforces.com/contest/734/problem/A
  int AntonAndDanki() {

      int numberOfGames = 0;
      cin >> numberOfGames;
      int winsOfDanik = 0;
      int winsOfAnton = 0;
      string code;
      cin >> code;
      for (int i = 0; i < numberOfGames; i++)
      {
          if (code[i] == 'A')
          {

              winsOfAnton++;
          }
          else
          {


              winsOfDanik++;
          }


      }

      if (winsOfDanik == winsOfAnton)
      {

          std::cout << "Friendship";
      }
      else if (winsOfDanik > winsOfAnton)
      {
          std::cout << "Danik";



      }
      else  std::cout << "Anton";
      return 0;
  }
  // Bear and Big Brother                                     http://codeforces.com/contest/791/problem/A
  int BearAndBigBrother()
  {
      int i = 0;
      int Limak_weight, Bob_weight;
      cin >> Limak_weight >> Bob_weight;
      do
      {

          Limak_weight = 3 * Limak_weight;
          Bob_weight = 2 * Bob_weight;
          i++;

      } while (Limak_weight <= Bob_weight);

      cout << i;



      return 0;
  }
  // Beautiful Matrix                                         http://codeforces.com/contest/263/problem/A
  int beatiful_matrix()
  {

      // حل أحسن: https://ideone.com/BOs0h8
      // https://www.youtube.com/watch?v=FU4thrvEvKg
      int matrix[5][5];
      for (int i = 0; i < 5; i++)
      {
          for (int j = 0; j < 5; j++)
          {
              cin >> matrix[i][j];
         
          }
      }
      int start, end;
      for (int i = 0; i < 5; i++)
      {
          for (int j = 0; j < 5; j++)
          {
              if (matrix[i][j] == 1)
              {
                  start = i;
                  end = j;   
              }
          }
      }

      int result;
      result = abs(start - 2) + abs(end - 2);
      cout << result;
      return 0;
  }
  // Gravity Flip                                             https://codeforces.com/contest/405/problem/A
  int GravityFlip() {


      int arr[101]; // الأصح إنك متبذرش في الذاكرة وتستخدم البوينتر.
      int n;
      cin >> n;
      for (int i = 0; i < n; ++i)
          cin >> arr[i];
      sort(arr, arr + n);
      for (int i = 0; i < n; ++i)
          cout << arr[i] << " ";

      return 0;
  } 
  // WRONG----------------------Petya and Strings             http://codeforces.com/contest/112/problem/A
  int PetyandStrings()
  {


      string first;
      cin >> first;
      string seconed;
      cin >> seconed;
      std::transform(first.begin(), first.end(), first.begin(),
          [](unsigned char c) { return std::tolower(c); });
      std::transform(seconed.begin(), seconed.end(), seconed.begin(),
          [](unsigned char c) { return std::tolower(c); });

     int firstPoints = 0, seconedPoints = 0;
      for (int i = 0; i < first.length(); i++)
      {

          if (first[i] > seconed[i])
          {
              firstPoints++;
          }
          else if (first[i] < seconed[i])
              seconedPoints++;
      }

      if (firstPoints > seconedPoints)
      {

          cout << "1";

      }
      else if (seconedPoints > firstPoints)
      {
          cout << "-1";

      } 
      else if (seconedPoints == firstPoints)
      {
          cout << "0";

      }

      return 0;

  } 
  // WRONG----------------------Boy or Girl                   http://codeforces.com/contest/236/problem/A
  int boyOrGirl()
  {
      string username;
      cout << username;
      cin >> username;
      cout << username;
      int unqueLetters = 0;
     int Letters = username.length();
     for (int i = 0; i < Letters; i++)
     {

         char s = username[i];
         for (int j = i+1; j < Letters; j++)
         {
             if (s == username[j])


                 unqueLetters++;
         }

     }

     int result = Letters - unqueLetters;
     if (result % 2 == 0)
     {
         cout << "CHAT WITH HER!" << endl;

     }
     else cout << "IGNORE HIM!" << endl;

     return 0;

}
  // Word                                                     http://codeforces.com/contest/59/problem/A شوف حل تاني
  int word()
  {
      string userinput;
      cin >> userinput;
      string temp = userinput;
      int equal = 0, nonEqual = 0;
        std::transform(userinput.begin(), userinput.end(), userinput.begin(),
        [](unsigned char c) { return std::tolower(c); });
        for (int i = 0; i < userinput.length(); i++)
        {

            if (userinput[i] == temp[i])
            {
                equal++;

            }
            else nonEqual++;

        }

        if (equal > nonEqual)
        {

            cout << userinput;
        }
        else if (nonEqual > equal)
        {
            transform(userinput.begin(), userinput.end(), userinput.begin(), ::toupper);
            cout << userinput;


        }
        else if (nonEqual == equal)
        {

            cout << userinput;
        }
        return 0;
    } 
  // Magnets                                                  https://codeforces.com/contest/344/problem/A
  int Magnets() {
      int numberOfMagnets; cin >> numberOfMagnets;
      int magnets[10000];
      int groups = 0;
      for (int i = 0; i < numberOfMagnets; i++)
      {
          cin >> magnets[i];
      }

      for (int i = 0; i < numberOfMagnets; i++)
      {
          if (magnets[i]!=magnets[i+1])
          {
              groups++;
          }
      }
      cout << groups;
      return 0;
  }
  // WRONG---------------------- Sereja and Dima              https://codeforces.com/contest/381/problem/A
  int SerejAandDima() {
      int nOfCards; cin >> nOfCards;
      int serejaPoints = 0, DimaPoints = 0;
      int cards[1000];
      for (int i = 0; i < nOfCards; i++)
      {
          cin >> cards[i];
      }
      sort(cards, cards + nOfCards, greater<int>());
  
      for (int i = 0; i < nOfCards; i++)
      {
          serejaPoints += cards[i];
          if (cards[i]==cards[nOfCards-1])
          {
              break;
          }
          DimaPoints +=cards[++i];
      }

 
      cout << serejaPoints << " " << DimaPoints;
      return 0;
  }
  // Stones on the Table                                      https://codeforces.com/contest/266/problem/A
  int StonesontheTable() {
      int Stones; cin >> Stones;
      string colors;
      cin >> colors;
      int moves = 0;
      for (int i = 0; i < colors.length(); i++)
      {

          if (colors[i] == colors[i + 1])
          {

              moves++;
          }

      }
      cout << moves;
      return 0;
  }
  // WRONG---------------------- Police Recruits              http://codeforces.com/contest/427/problem/A 
  int PoliceRecruits(){






          int n;
          cin >> n;
          int curoff = 0;
          int untreated = 0;
          for (int i = 0; i < n; i++) {
              int x;
              cin >> x;
              if (x > 0) {
                  curoff += x;

              }
              else {
                  if (curoff < 1) {
                      ++untreated;
                  }
                  else {
                      --curoff;
                  }
              }
          }
          cout << untreated;
          return 0;
     

      return 0;
  }
  // Black Square                                             https://codeforces.com/contest/431/problem/A
  int BlackSquare() {

          long  int a, b, c, d, i, j, ans;
          char s[100001];
          while (cin >> a >> b >> c >> d)
          {
              cin >> s;
              ans = 0;
              for (i = 0; i < strlen(s); i++)
              {
                  if (s[i] == '1')
                      ans += a;
                  else if (s[i] == '2')
                      ans += b;
                  else if (s[i] == '3')
                      ans += c;
                  else if (s[i] == '4')
                      ans += d;
              }
              cout << ans << endl;
          }
          return 0;

      
      }       
  // Night at The Museum                                      https://codeforces.com/contest/731/submission/104940438
  int Night_at_The_Museum()
{
    // IMPORTANT LOOK: https://www.learncpp.com/cpp-tutorial/chars/
    char word[100];
    cin >> word;
    int pointer = 97;
    int temp = 0;
    int moves = 0, clockwise = 0, counterclockwise = 0;
    for (int i = 0; i <strlen(word) ; i++)
    {
        temp = word[i];
        // from pointer to char;
        clockwise = abs(pointer - temp);
        counterclockwise = abs(abs(pointer - temp) - 26);

        if (clockwise > counterclockwise)
        {

            moves += counterclockwise;
        } else             moves += clockwise;

        pointer = temp;
    }

    cout << moves;
}
  // Game                                                     https://codeforces.com/contest/268/problem/A
  int Games() {
    int n; cin >> n;
    int HomeColor[30];
    int guestColor[30];
    for (int i = 0; i < n; i++)
    {

        cin >> HomeColor[i];
        cin >> guestColor[i];
    }

    int result = 0, temp;
    for (int i = 0; i < (n); i++)
    {
        temp = HomeColor[i];
        for (int j = 0; j < n; j++)
        {
            if (temp==guestColor[j])
            {
                result++;
            }
        }
    }
    cout << result;
}
  // Buy a Shovel                                             https://codeforces.com/contest/732/problem/A
  int buy_a_shovel() {

    int k, r, h = 1, i = 0, j = 1;
    bool b = true;
        cin >> k >> r;
        while (b) {
            i++;
            h = k * i;
            if (h % 10 == 0 || h % 10 == r) {
                b = false;
            }
        }
        cout << i;

}
  // A. Is your horseshoe on the other hoof?                  https://codeforces.com/contest/228/problem/A
  int horseshoe() {

        int mas[5], e = 3;
        for (int i = 0; i < 4; i++) {
            cin >> mas[i];
        }
        for (int i = 0; i < 3; i++) {
            if (mas[i] != mas[i + 1]) {
                e--;
            }
        }
        cout << e;

        return 0;
}
  // A. Colorful Stones (Simplified Edition)                  https://codeforces.com/contest/265/problem/A
  // here you can find two solutions for this problem, first is mine and seconed I found it here: https://github.com/fuwutu/CodeForces/blob/master/265A%20-%20Colorful%20Stones%20(Simplified%20Edition).cpp
  // I recommend to study either of them. but seconed is better and more easier.
  int ColorfulStonesSolution1()
{
    string stones, instruction;
    stones; cin >> stones;
    instruction; cin >> instruction;
    int moves = 0;
    int temp1, j = 0;
    for (int i = 0; i < stones.length(); i++)
    {
        temp1 = moves;

        while (temp1 == moves && j < instruction.length())
        {
            if (instruction[j]==stones[i])
            {
                moves++;
            }
            j++;
        }

        }

    cout << moves + 1;

    }
  int ColorfulStonesSolution2()
{
    string stone, instructions;
    cin >> stone >> instructions;
    int pos = 0;
    for (int i = 0; i < instructions.length(); i++)
    {

        if (instructions[i] == stone[pos])
        {
            pos++;
        }

    }

    cout << pos + 1;

}
  // Die Roll                                                 http://codeforces.com/contest/9/problem/A
  int Die_Roll()
{
    int Yakko, Wakko;
    cin >> Yakko >> Wakko;
    string result[7]= { "", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6" };
    int D = max(Yakko, Wakko);
    cout << result[D] << endl;
    return 0;
}
  // Juicer                                                   https://codeforces.com/contest/709/problem/A (NOT ACCEPTED)
  int Juicer()
{
   int n_orange, max_size, juicer_overflows;
    cin >> n_orange >> max_size >> juicer_overflows;
   int * orangesize = new int [n_orange];
    for (long long i = 0; i < n_orange; i++)
    {
        cin >> orangesize[i];
    }
    int  much_times = 0;
    for (int i = 0; i < n_orange; i++)
    {
        if (orangesize[i] < max_size)
        {
            much_times += orangesize[i];
        }
    }
    cout << much_times / 10;
}
  // Carrot Cakes                                             https://codeforces.com/contest/799/problem/A
  // NOT ACCEPTED!
  int Carrot_Cakes()
{
        int numberOfCakes, bakeTime , SameTimeCake , newOven;
    cin >> numberOfCakes >> bakeTime >> SameTimeCake >> newOven;
    double totalTime = 0, afterTotaltime = 0;
    totalTime = (numberOfCakes / SameTimeCake) * bakeTime;
    afterTotaltime = (totalTime / 2) + newOven;

    if (totalTime > afterTotaltime)
    {
        cout << "YES";
    }
    else cout << "NO";
    return 0;

}
  // A. Anton and Letters                                     https://codeforces.com/contest/443/problem/A
  // دا حلي أنا، وهو حل سيء أنصح تدور على غيره لأني ملقتش.
  int  Anton_and_Letters()
{
    string input;
    getline(cin , input);
    char a[1000];
    int i = 0, j = 0, legnth = 0, newLetter = 0;
    while (i < input.length())
    {
        if (input[i] != '{' && input[i] != '}' && input[i] != ',' && input[i] != ' ')
        {
            legnth++;
            a[j] = input[i];
            j++;
        }
        i++;
        }
    sort(a, a + legnth);
    for (int i = 0; i < legnth; i++)
    {
        if (a[i]!=a[i+1])
        {
            newLetter++;
        }
    }
    cout << newLetter;
}
  // Way Too Long Words                                       https://codeforces.com/problemset/problem/71/A
  int Way_Too_Long_Words() {

    int n = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        int l = word.length();
        if (l > 10)   cout << word[0] << word.length() - 2 << word[l - 1] << endl;
        else cout << word << endl;
    }
}
  // Free Ice Cream                                           https://codeforces.com/contest/686/problem/A
  int Free_Ice_Cream() {
    long long kids = 0, Ice = 0, newIce = 0, sadBoy = 0;
    cin >> kids >> Ice;
    char x;
    for (long long i = 0; i < kids; i++)
    {
        cin >> x;
        cin >> newIce;
        if (x == '+')
        {
            Ice += newIce;
        }
        else if (x == '-' && Ice - newIce >= 0)
        {
            Ice -= newIce;
        }
        else sadBoy++;
    }
    cout << Ice << " " << sadBoy;
   return 0;
}
  // Helpful Maths                                            https://codeforces.com/contest/339/problem/A
  int Helpful_Maths()
{
    string input;
    cin >> input;
    int i = 0, j = 0;
    char output[100];
    while (i < input.length())
    {
        if (input[i] != ' ' && input[i] != '+')
        {
            output[j] = input[i];
            j++;
        }
        i++;
    }
    sort(output, output + j);
    for (int i = 0; i < j; i++)
    {
        cout << output[i];
        if (i == (j - 1))
        {
            break;
        }
        else cout << '+';
    }
    return 0;
}
  // NON SOLVED ! New Password                                https://codeforces.com/contest/770/problem/A
  int Team_Olympiad() {
    bool programming[7], math[7], PE[7], j = 0;
    int skills[100] = { 1,3,1,3,2,1,2 };
    for (int i = 0; i < 7; i++)
    {

        if (skills[i]==1)
        {
            programming[i] = true;

            j++;
        }
        else if (skills[i] == 2) {

            math[i] = true;

            j ++ ;
        }
        else if (skills[i] == 3)
        {

            PE[i] = true;

            j ++;
        }

    }

    for (int i = 0; i <7; i++)
    {
        if (programming[i]==true)
        {

            for (int j = 0; j < 7; j++)
            {

                if (math[j]==true)
                {

                    for (int x = 0; x < 7; x++)
                    {

                        if (PE[x]==true && j!=i && x!=i)
                        {

                            cout << i + 1 << j + 1 << x + 1 << endl;
                            break;
                        }
                    }
                }
            }
        }
    }

}
  // New Password                                             https://codeforces.com/contest/770/problem/A
  int new_password()
{
    int length, distinct, start = 97;
    cin >> length >> distinct;
    char* password = new char[length];
    for (int i = 0; i < length; i++)
    {
        if (distinct)
        {
            password[i] = start;
            start++;
            if (start> 122)
            {
                start = 97;
            }
            distinct--;
        }
        else
        {
            start = 97;
            password[i] = password[i-2];
        }
    }
    for (int i = 0; i < length; i++)
    {
        cout << password[i];
    }
}
  int new_password_anothersolution() {
    string s = "abcdefghijklmnopqrstuvwxyz";
    string s2 = "";
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        s2 += s[i % k];
    }
    cout << s2 << endl;
    return 0;
}
  //  Lineland Mail                                           http://codeforces.com/contest/567/problem/A
  int  Lineland_Mail()
{
    // source: https://github.com/mohandsakr/my-problem-solving-solutions-on-codeforces.com/blob/master/codeforces%20problem%20567%20A%20Lineland%20Mail.cpp
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        long long  mini;
        long long maxi;
        if (i==0) {
            mini = abs(arr[i] - arr[i + 1]);
            maxi = abs(arr[i] - arr[n - 1]);
        }
        else if (i == n - 1) {
            maxi = abs(arr[i] - arr[0]);
            mini = abs(arr[i] - arr[i - 1]);
        }
        else {
            mini = min(abs(arr[i] - arr[i + 1]), abs(arr[i] - arr[i - 1]));
            maxi = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
        }
        cout << mini << " " << maxi << "\n";
    }
    return 0;

    }
  // Mahmoud and Longest Uncommon Subsequence                 http://codeforces.com/contest/766/problem/A
  int Mahmoudand_Longest_Uncommon_Subsequence() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size())
        cout << max(s1.size(), s2.size()) << endl;
    else if (s1 == s2)
        cout << -1 << endl;
    else
        cout << s1.size() << endl;

    return 0;

}

  
