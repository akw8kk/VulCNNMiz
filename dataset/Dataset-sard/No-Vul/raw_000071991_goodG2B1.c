static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
        VAR1[0] = VAR2''; 
    }
    {
        wchar_t VAR3[100];
        wmemset(VAR3, VAR2'', 100-1); 
        VAR3[100-1] = VAR2''; 
        
        memcpy(VAR1, VAR3, 100*sizeof(wchar_t));
        VAR1[100-1] = VAR2''; 
        FUN4(VAR1);
        free(VAR1);
    }
}