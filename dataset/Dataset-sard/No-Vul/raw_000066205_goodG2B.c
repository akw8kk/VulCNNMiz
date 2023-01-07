static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR4;
    {
        wchar_t * VAR1 = *VAR2;
        
        wmemset(VAR1, VAR5'', 50-1); 
        VAR1[50-1] = VAR5''; 
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR6[50] = VAR5"";
            
            memmove(VAR6, VAR1, wcslen(VAR1)*sizeof(wchar_t));
            VAR6[50-1] = VAR5''; 
            FUN3(VAR1);
        }
    }
}