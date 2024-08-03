#include <stdio.h>

int main(){
    int m_num, n_num;
    scanf("%d %d", &m_num, &n_num);

    if (m_num > n_num)
    {
        for (int i = m_num; i >= n_num; i--)
        {
            printf("%d ", i);
        }
        
    }
    else{
        for (int i = m_num; i <= n_num; i++)
        {
            printf("%d ", i);
        }
    }
}