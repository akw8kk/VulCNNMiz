void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2[5];
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(10*sizeof(wchar_t));
    
    VAR2[2] = VAR1;
    FUN2(VAR2);
}