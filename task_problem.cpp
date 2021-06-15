// Teacher has assigned some tasks to Polycarp, but after completing a task, he's not supposed to diverted his mind to that task again, if he does print "YES", else print "NO"
#include <iostream>
using namespace std;
void solve();
int main()
{
    int total_tasks;
    // Number of tasks assigned to Polycarp
    // cout << "Enter the total number of tasks Polycarp need to perform" << endl;
    cin >> total_tasks;
    while (total_tasks--)
        solve();

    return 0;
}
void solve()
{
    unsigned int n_task, flag = 0, i, j;
    char task[50], temp[50];
    // Number of days Polycarp solved a task = n_task

    // cout << "Enter how many days will it take to finish the task" << endl;
    cin >> n_task;
    // cout << "Enter the task format" << endl;
    cin >> task;
    flag = 0;
    for (int i = 0; i < n_task; i++)
    {
        temp[i] = task[i];
        if (i > 0)
        {
            if ((temp[i - 1] != task[i]))
            {
                j = i - 1;
                for (int k = i + 1; k < n_task; k++)
                {

                    if (temp[j] == task[k])
                    {
                        flag = 1;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
}
/*5
3
ABA
11
DDBBCCCBBEZ
7
FFGZZZY
1
Z
2
AB*/
