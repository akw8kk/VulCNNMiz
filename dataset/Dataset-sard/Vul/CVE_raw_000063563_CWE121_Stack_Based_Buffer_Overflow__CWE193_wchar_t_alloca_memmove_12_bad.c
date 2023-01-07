void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    if(FUN3())
    {
        
        VAR1 = VAR2;
        VAR1[0] = VAR4''; 
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = VAR4''; 
    }
    {
        wchar_t VAR5[10+1] = VAR6;
        
        
        memmove(VAR1, VAR5, (wcslen(VAR5) + 1) * sizeof(wchar_t));
        FUN4(VAR1);
    }
}