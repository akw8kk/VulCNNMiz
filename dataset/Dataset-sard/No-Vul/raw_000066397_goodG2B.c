static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t VAR4[100];
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
            size_t VAR7, VAR8;
            VAR8 = wcslen(VAR1);
            
            for (VAR7 = 0; VAR7 < VAR8; VAR7++)
            {
                VAR6[VAR7] = VAR1[VAR7];
            }
            VAR6[50-1] = VAR5''; 
            FUN2(VAR1);
        }
    }
}