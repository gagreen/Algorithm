#include    <stdio.h>
#include    <vector>
#pragma warning (disable:4996)
 
struct hist
{
    long long int h;
    long long int r;
    long long int l;
};
static hist H[111111];
std::pair<int, int> S[111111]; //<������׷� ����, ������׷� �ε���>
int main()
{
    int N;
    scanf("%d", &N);
    int top = 0;
    for (int i = 1; i <= N; ++i)
    {
        int tmp;
        scanf("%d", &tmp);
 
        H[i].h = tmp;
        H[i].r = i;
        H[i].l = i;
    }
 
    for (int i = 1; i <= N; ++i)
    {
        if (S[top].first <= H[i].h)//���� ����ִ� �� ���� ū ��� Ȥ������ ���
        {
            S[++top].first = H[i].h;
            S[top].second = i; //�ش� �ε��� ����
        }
        else
        {
            while (S[top].first > H[i].h) //���ÿ� ������׷��� �ְ� �� ���̰� �Է¹��� ���̺��� ū ���
                H[S[top--].second].r = i - 1;
            S[++top].first = H[i].h;
            S[top].second = i;
        }
    }
 
    while (top > 0)
        H[S[top--].second].r = N;
 
    top = 0;
    for (int i = N; i >= 1; --i)
    {
        if (S[top].first <= H[i].h)
        {
            S[++top].first = H[i].h;
            S[top].second = i;
        }
        else
        {
            while (S[top].first > H[i].h && top > 0)
                H[S[top--].second].l = i + 1;
            S[++top].first = H[i].h;
            S[top].second = i;
        }
    }
    while (top > 0)
        H[S[top--].second].l = 1;
 
    long long max = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (H[i].h * (H[i].r - H[i].l + 1) > max)
            max = H[i].h * (H[i].r - H[i].l + 1);
    }
    printf("%llu", max);
    return 0;
}
