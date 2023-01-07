static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    
    VAR1 = VAR3;
    VAR1[0] = VAR4''; 
    {
        wchar_t * VAR5 = VAR1;
        wchar_t * VAR1 = VAR5;
        {
            wchar_t VAR6[10+1] = VAR7;
            
            
            memcpy(VAR1, VAR6, (wcslen(VAR6) + 1) * sizeof(wchar_t));
            FUN3(VAR1);
        }
    }
}