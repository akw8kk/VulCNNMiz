static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t * VAR4 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
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
            size_t VAR7, VAR8;
            wchar_t VAR9[100];
            wmemset(VAR9, VAR6'', 100-1);
            VAR9[100-1] = VAR6''; 
            VAR8 = wcslen(VAR9);
            
            for (VAR7 = 0; VAR7 < VAR8; VAR7++)
            {
                VAR9[VAR7] = VAR1[VAR7];
            }
            VAR9[100-1] = VAR6'';
            FUN3(VAR9);
        }
    }
}