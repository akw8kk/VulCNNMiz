static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR2;
    if(VAR3!=5)
    {
        
        FUN3("");
    }
    else
    {
        
        wmemset(VAR1, VAR4'', 50-1); 
        VAR1[50-1] = VAR4''; 
    }
    {
        wchar_t VAR5[50] = VAR4"";
        
        wcscat(VAR5, VAR1);
        FUN4(VAR1);
    }
}