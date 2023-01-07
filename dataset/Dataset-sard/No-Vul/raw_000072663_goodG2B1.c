static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        wmemset(VAR1, VAR2'', 50-1); 
        VAR1[50-1] = VAR2''; 
    }
    {
        wchar_t VAR3[50] = VAR2"";
        
        wcsncat(VAR3, VAR1, wcslen(VAR1));
        VAR3[50-1] = VAR2''; 
        FUN4(VAR1);
        free(VAR1);
    }
}