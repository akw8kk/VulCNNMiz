static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR2, VAR4'', 50-1); 
    VAR2[50-1] = VAR4''; 
    wmemset(VAR3, VAR4'', 100-1); 
    VAR3[100-1] = VAR4''; 
    if(FUN3())
    {
        
        FUN4("");
    }
    else
    {
        
        VAR1 = VAR3;
    }
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR4'', 100-1);
        VAR5[100-1] = VAR4''; 
        
        memmove(VAR5, VAR1, wcslen(VAR5)*sizeof(wchar_t));
        VAR5[100-1] = VAR4'';
        FUN5(VAR5);
    }
}