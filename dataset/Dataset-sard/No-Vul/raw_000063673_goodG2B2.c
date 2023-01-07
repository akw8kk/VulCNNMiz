static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[10];
    wchar_t VAR3[10+1];
    if(1)
    {
        
        VAR1 = VAR3;
        VAR1[0] = VAR4''; 
    }
    {
        wchar_t VAR5[10+1] = VAR6;
        size_t VAR7, VAR8;
        VAR8 = wcslen(VAR5);
        
        
        for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
        {
            VAR1[VAR7] = VAR5[VAR7];
        }
        FUN2(VAR1);
    }
}