void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    
    wmemset(VAR1, VAR2'', 100-1); 
    VAR1[100-1] = VAR2''; 
    FUN2(VAR1);
}