static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t VAR4[50];
    wchar_t VAR5[100];
    wmemset(VAR4, VAR6'', 50-1); 
    VAR4[50-1] = VAR6''; 
    wmemset(VAR5, VAR6'', 100-1); 
    VAR5[100-1] = VAR6''; 
    {
        wchar_t * VAR1 = *VAR2;
        
        VAR1 = VAR5;
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR7[100];
            wmemset(VAR7, VAR6'', 100-1);
            VAR7[100-1] = VAR6''; 
            
            memcpy(VAR7, VAR1, wcslen(VAR7)*sizeof(wchar_t));
            VAR7[100-1] = VAR6'';
            FUN2(VAR7);
        }
    }
}