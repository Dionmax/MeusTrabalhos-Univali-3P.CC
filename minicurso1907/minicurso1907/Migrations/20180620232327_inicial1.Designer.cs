﻿// <auto-generated />
using System;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Infrastructure;
using Microsoft.EntityFrameworkCore.Migrations;
using Microsoft.EntityFrameworkCore.Storage.ValueConversion;
using minicurso1907.Controllers.Database;

namespace minicurso1907.Migrations
{
    [DbContext(typeof(Minicurso1907Context))]
    [Migration("20180620232327_inicial1")]
    partial class inicial1
    {
        protected override void BuildTargetModel(ModelBuilder modelBuilder)
        {
#pragma warning disable 612, 618
            modelBuilder
                .HasAnnotation("ProductVersion", "2.1.1-rtm-30846");

            modelBuilder.Entity("minicurso1907.Models.Filme", b =>
                {
                    b.Property<int>("ID")
                        .ValueGeneratedOnAdd();

                    b.Property<DateTime>("AssistidoEm");

                    b.Property<string>("Elenco");

                    b.Property<string>("Genero");

                    b.Property<string>("Sinopse");

                    b.Property<int>("Status");

                    b.Property<string>("Titulo")
                        .HasMaxLength(50);

                    b.Property<string>("UrlCapa");

                    b.HasKey("ID");

                    b.ToTable("Filmes");
                });
#pragma warning restore 612, 618
        }
    }
}
