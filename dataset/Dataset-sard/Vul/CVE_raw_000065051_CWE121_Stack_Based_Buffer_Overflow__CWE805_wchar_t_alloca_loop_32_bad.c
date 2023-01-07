void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t * VAR4 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    {
        wchar_t * VAR1 = *VAR2;
        
        VAR1 = VAR4;
        VAR1[0] = VAR6''; 
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            size_t VAR7;
            wchar_t VAR8[100];
            wmemset(VAR8, VAR6'', 100-1); 
            VAR8[100-1] = VAR6''; 
            
            for (VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR1[VAR7] = VAR8[VAR7];
            }
            VAR1[100-1] = VAR6''; 
            FUN3(VAR1);
        }
    }
}