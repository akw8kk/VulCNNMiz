void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t VAR4[10];
    wchar_t VAR5[10+1];
    {
        wchar_t * VAR1 = *VAR2;
        
        VAR1 = VAR4;
        VAR1[0] = VAR6''; 
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR7[10+1] = VAR8;
            size_t VAR9, VAR10;
            VAR10 = wcslen(VAR7);
            
            
            for (VAR9 = 0; VAR9 < VAR10 + 1; VAR9++)
            {
                VAR1[VAR9] = VAR7[VAR9];
            }
            FUN2(VAR1);
        }
    }
}