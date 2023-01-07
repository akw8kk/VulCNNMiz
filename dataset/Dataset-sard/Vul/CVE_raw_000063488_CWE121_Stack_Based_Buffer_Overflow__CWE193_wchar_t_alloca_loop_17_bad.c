void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
        VAR2[0] = VAR5''; 
    }
    {
        wchar_t VAR6[10+1] = VAR7;
        size_t VAR1, VAR8;
        VAR8 = wcslen(VAR6);
        
        
        for (VAR1 = 0; VAR1 < VAR8 + 1; VAR1++)
        {
            VAR2[VAR1] = VAR6[VAR1];
        }
        FUN3(VAR2);
    }
}