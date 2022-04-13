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
std::pair<int, int> S[111111]; //<히스토그램 높이, 히스토그램 인덱스>
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
        if (S[top].first <= H[i].h)//이전 들어있는 값 보다 큰 경우 혹은같은 경우
        {
            S[++top].first = H[i].h;
            S[top].second = i; //해당 인덱스 저장
        }
        else
        {
            while (S[top].first > H[i].h) //스택에 히스토그램이 있고 그 높이가 입력받은 높이보다 큰 경우
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
