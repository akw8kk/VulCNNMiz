void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(10*sizeof(wchar_t));
    FUN2(&VAR1);
}