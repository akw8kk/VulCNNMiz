void FUN1()
{
    wchar_t * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_loop_34_unionType VAR2;
    wchar_t VAR3[50];
    wchar_t VAR4[100];
    
    VAR1 = VAR3;
    VAR1[0] = VAR5''; 
    VAR2.VAR6 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR7;
        {
            size_t VAR8;
            wchar_t VAR9[100];
            wmemset(VAR9, VAR5'', 100-1); 
            VAR9[100-1] = VAR5''; 
            
            for (VAR8 = 0; VAR8 < 100; VAR8++)
            {
                VAR1[VAR8] = VAR9[VAR8];
            }
            VAR1[100-1] = VAR5''; 
            FUN2(VAR1);
        }
    }
}