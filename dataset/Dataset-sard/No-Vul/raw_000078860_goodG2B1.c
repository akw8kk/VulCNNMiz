static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR2, VAR3'', 100-1);
    VAR2[100-1] = VAR3'';
    if(5!=5)
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR2;
    }
    {
        wchar_t VAR4[100];
        wmemset(VAR4, VAR3'', 100-1); 
        VAR4[100-1] = VAR3''; 
        
        wcsncpy(VAR4, VAR1, wcslen(VAR4));
        
        VAR4[100-1] = VAR3'';
        FUN4(VAR4);
    }
}