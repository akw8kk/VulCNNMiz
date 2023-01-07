void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL; 
    
    VAR1 = (wchar_t *)malloc(20*sizeof(wchar_t));
    VAR2 = VAR1;
    FUN2();
}