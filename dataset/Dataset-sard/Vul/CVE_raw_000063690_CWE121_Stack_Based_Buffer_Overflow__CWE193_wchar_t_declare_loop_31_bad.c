void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[10];
    wchar_t VAR3[10+1];
    
    VAR1 = VAR2;
    VAR1[0] = VAR4''; 
    {
        wchar_t * VAR5 = VAR1;
        wchar_t * VAR1 = VAR5;
        {
            wchar_t VAR6[10+1] = VAR7;
            size_t VAR8, VAR9;
            VAR9 = wcslen(VAR6);
            
            
            for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
            {
                VAR1[VAR8] = VAR6[VAR8];
            }
            FUN2(VAR1);
        }
    }
}