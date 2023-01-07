static void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t VAR3[10];
    wchar_t VAR4[10+1];
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR4;
        VAR2[0] = VAR5''; 
    }
    {
        wchar_t VAR6[10+1] = VAR7;
        size_t VAR8, VAR9;
        VAR9 = wcslen(VAR6);
        
        
        for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
        {
            VAR2[VAR8] = VAR6[VAR8];
        }
        FUN2(VAR2);
    }
}