static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t VAR4[10];
    wchar_t VAR5[10+1];
    {
        wchar_t * VAR1 = *VAR2;
        
        VAR1 = VAR5;
        VAR1[0] = VAR6''; 
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR7[10+1] = VAR8;
            
            
            memcpy(VAR1, VAR7, (wcslen(VAR7) + 1) * sizeof(wchar_t));
            FUN2(VAR1);
        }
    }
}