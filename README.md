Decodificador MIPS pocket 32-Bit
================================
Operações Suportadas

- R Type: `add`,  `sub`,  `mult`,  `div`,  `and`,  `or`,  `xor`,  `nor`,  `slt`,  `sll`,  `srl`,  `jr`

- I Type: `addi`,  `andi`,  `ori`,  `slti`,  `lw`,  `sw`,  `beq`, `bne`

- J Type: `j`,  `jal`

## Excutar:
Executar Makefile
```bash
$ make
```
O comando irá gerar uma pasta **bin** que contém o executável

No diretório ___test___ existem arquivos .in para testes

Exemplo de execução
```bash
$ make
```

```bash
$ ./bin/decoder-mips-pocket < ./__test__/type-r.in
```
