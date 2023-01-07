static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    if(FUN3())
    {
        
        FUN4("");
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = VAR4''; 
    }
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR4'', 100-1); 
        VAR5[100-1] = VAR4''; 
        
        wcsncat(VAR1, VAR5, 100);
        FUN5(VAR1);
    }
}