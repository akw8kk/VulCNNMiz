void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if(5==5)
    {
        
        wmemset(VAR1, VAR2'', 100-1); 
        VAR1[100-1] = VAR2''; 
    }
    {
        wchar_t VAR3[50] = VAR2"";
        
        wcscat(VAR3, VAR1);
        FUN2(VAR1);
        free(VAR1);
    }
}