void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR4;
    {
        wchar_t * VAR1 = *VAR2;
        
        wmemset(VAR1, VAR5'', 100-1); 
        VAR1[100-1] = VAR5''; 
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR6[50] = VAR5"";
            
            FUN3(VAR6, wcslen(VAR1), VAR5"", VAR1);
            FUN4(VAR1);
        }
    }
}